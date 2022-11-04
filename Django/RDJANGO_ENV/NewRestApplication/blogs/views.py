from django.shortcuts import render
from rest_framework.decorators import api_view
from rest_framework.response import Response
from .models import *
from .serializers import StudentSerializer

@api_view(['GET'])  # if we did not specify which , then it will acept all request i.e GET, POST, DELETE
def bloghome(request):
	student_obj = Student.objects.all()
	student_seri = StudentSerializer(student_obj, many=True)

	return Response(
			{
				'status' : 200,
				'message' : 'Hello Djago Rest Api',
				'payload' : student_seri.data
			}

		)

@api_view(['POST'])
def upload_student_info(request):
	udata = request.data
	# print(udata)
	seri = StudentSerializer(data=request.data)

	# this is logic part and best practice is write in serializers.py
	# if request.data['age'] < 18:
	# 	return Response(
	# 		{
	# 			'status' : 403,
	# 			'message' : "Age Should not less than 18" 
	# 		}
	# 	)

	if not seri.is_valid():
		print(seri.errors)
		return Response(
			{
				'status' : 403,
				'errors' : seri.errors,
				'message' : "Something Went Wrong" 
			}
		)
	seri.save()

	return Response(
			{
				'status' : 200,
				'payload' : udata,
				'message' : 'Your Data Has been saved successfully'
			}
		)


@api_view(['PUT'])
def update_student(request, id):
	try:
		std_post = Student.objects.get(id=id)
		std_seri = StudentSerializer(std_post, data = request.data, partial = True)  # ['PATCH'] just add-> partial = True (it will take previos values, need not to pass whole packet. i.e fields)


		if not std_seri.is_valid():
			print(std_seri.errors)
			return Response(
				{
					'status' : 403,
					'errors' : std_seri.errors,
					'message' : "Something Went Wrong" 
				}
			)
		std_seri.save()
		return Response(
				{
					'status' : 200,
					'payload' : request.data,
					'message' : 'Your Data Has Updated been saved successfully'
				}
			)
	except Exception as e:
		print(e)
		return Response(
				{
					'status' : 403,
					'message' : 'Invalid id'
				}
			)


@api_view(['DELETE'])
def delete_student(request, id):
	try:
		std = Student.objects.get(id=id)
		std.delete()
		return Response(
				{
					'status' : 200,
					'message' : 'Your Data Has Deleted'
				}
			)
	except Exception as e:
		print(e)
		return Response(
				{
					'status' : 403,
					'message' : 'Invalid id'
				}
			)


@api_view()  
def info(request):
	return Response(
			{
			'GET' : 'Get the Data from the Backend',
			'POST' : 'DATA createtion , happens, send data to backend',
			'PUT' : 'DATA Update',
			'PATCH' : 'Partially Update Data',
			'DELETE' : 'Delete'
			}
		)

