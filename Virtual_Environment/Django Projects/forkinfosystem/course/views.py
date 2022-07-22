from django.shortcuts import render, redirect
from .models import *
from .forms import *
from django.contrib import messages


def course_home(request):
	courses = Courses.objects.all()
	context = {
		'title' : 'Home | Fork Infosystems',
		'courses' : courses
	}
	return render(request, 'course/c_home.html', context)

def about(request):
    
    context = {
        'title' : 'About | Fork Infosystems',

    }
    return render(request, 'course/about.html', context)


def contact(request):
	if request.method == "POST":
		form = ContactForm(request.POST)
		if form.is_valid():
			form.save()
			name = form.cleaned_data.get('first_name')
			messages.success(request, f"{name} Thanks for Connecting with ForkInfo Systems")
			return redirect('/')
	else:
		form = ContactForm()
	context = {
	'title': 'Contact | Fork Infosystems',
	'form' : form
	}
	return render(request, 'course/contact.html', context)

def register_user(request):
    if request.method == "POST":
    	form = UserRegistrationForm(request.POST)
    	if form.is_valid():
    		form.save()
    		name = form.cleaned_data.get('username')
    		messages.success(request, f"{name} Your Account has been successfully created !")
    		return redirect('/')
    else:
    	form = UserRegistrationForm()
    context = {
        'title' : 'Register_User | Fork Infosystems',
        'form' : form

    }
    return render(request, 'course/register.html', context)


def more_info(request, pk):
	courses = Courses.objects.get(id=pk)
	context = {
		'title' : 'MoreInfo | Fork Infosystems',
		'courses' : courses
	}
	return render(request, 'course/more_about_c.html', context)