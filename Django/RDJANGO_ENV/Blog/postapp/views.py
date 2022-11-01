from django.shortcuts import render
from rest_framework.decorators import api_view
from rest_framework.response import Response
from .models import PostModel
from .serializers import PostSerializer

@api_view(['GET'])
def post_home(request):
	post = PostModel.objects.all()
	post_seri = PostSerializer(post, many=True)
	return Response(
			{
				"status" : 200,
				"message" : "First Django RestFrameWork Application",
				"posts" : post_seri.data
			}
		) 

@api_view(['POST'])
def upload_post(request):

	post = request.data
	post_seri = PostSerializer(data=post)

	if not post_seri.is_valid():
		return Response(
				{
					"status" : 403,
					"message" : "Sorry , Some Error has occured, and data has not uploaded"
				}
			)
	post_seri.save()
	return Response(
			{
				"status" : 200,
				"message" : "Posted Successfully"
			}
		)