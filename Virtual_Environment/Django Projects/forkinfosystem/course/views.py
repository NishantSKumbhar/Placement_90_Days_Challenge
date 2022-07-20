from django.shortcuts import render
from .models import *
from .forms import ContactForm

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
	form = ContactForm()
	context = {
	'title': 'Contact | Fork Infosystems',
	'form' : form
	}
	return render(request, 'course/contact.html', context)

def more_info(request, pk):
	courses = Courses.objects.get(id=pk)
	context = {
		'title' : 'MoreInfo | Fork Infosystems',
		'courses' : courses
	}
	return render(request, 'course/more_about_c.html', context)