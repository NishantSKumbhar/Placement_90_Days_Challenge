from django.urls import path
from . import views


urlpatterns = [
	path('', views.post_home, name="POSTHOME"),
	path('upload/', views.upload_post, name="UPLOADPOST")
]