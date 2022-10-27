from django.urls import path
from . import views

urlpatterns = [
	path('', views.home_page, name="HOME"),
	path('account/', views.account_page, name="ACCOUNT"),
	path('profile/<str:pk>/', views.profile_page, name="PROFILE"),
	path('event/<str:pk>/', views.event_page, name="EVENT"),
	path('event-Registration-Confirmation/<str:pk>/', views.confirmation_event_page, name="EVENT_CONFIRMATION"),
	
]