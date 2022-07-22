from django.urls import path
from . import views

urlpatterns = [
    path('', views.course_home, name = "Course-Home"),
    path('about/', views.about, name = "About-Fork"),
    path('contact/', views.contact, name = "Contact-Fork"),
    path('moreinfo/<str:pk>/', views.more_info, name = "More-Info-Course"),
    path('register/', views.register_user, name = "Register-User"),
]
