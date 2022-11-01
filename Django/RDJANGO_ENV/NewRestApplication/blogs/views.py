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

