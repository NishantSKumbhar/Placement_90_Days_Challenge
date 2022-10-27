from django.shortcuts import render, redirect
from .models import User, Event, Submission
# Create your views here.


def home_page(request):
	users = User.objects.filter(hackathon_participants=True)
	events = Event.objects.all()
	context = {
		'title' : 'Home Event',
		'users' : users,
		'events' : events
	}
	return render(request, 'home.html', context)


def event_page(request, pk):
	event = Event.objects.get(id=pk)
	
	context = {
		'title' : 'Register Event',
		'event' : event,
		
	} 
	return render(request, 'event.html', context)

def confirmation_event_page(request, pk):
	event = Event.objects.get(id=pk)
	if request.method == 'POST':
		event.participants.add(request.user)
		return redirect('EVENT', pk=event.id)
	context = {
		'title' : 'Confirm Event',
		'event' : event
	}
	return render(request, 'event_confirmation.html', context)


def profile_page(request, pk):
	user = User.objects.get(id=pk)
	context = {
	'title' : 'Profile Page',
	'user' : user
	}
	return render(request, 'profile.html', context)


def account_page(request):
	user = request.user
	context = {
	'title' : 'Account Page',
	'user' : user
	}
	return render(request, 'account.html', context)