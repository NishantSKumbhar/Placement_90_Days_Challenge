from django.urls import path
from . import views

urlpatterns = [
    path('', views.courseHome, name="COURSEHOME"),
    path('about/', views.about, name="ABOUT"),
    path('course/<str:pk>', views.courseDescription, name="COURSEDESCRIPTION"),
]
