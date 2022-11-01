from django.urls import path
from . import views

urlpatterns = [
    path('', views.bloghome, name="BLOGHOME"),
    path('uploadinfo/', views.upload_student_info, name="postinfo"),
    path('info/', views.info, name="info"),

]