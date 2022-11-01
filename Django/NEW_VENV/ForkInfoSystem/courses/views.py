from django.shortcuts import render
from .models import CourseModel
from django.contrib.auth.decorators import login_required
def courseHome(request):
	courses_list = CourseModel.objects.all()
	context = {

		'title' : 'ForkInfoSystem | Home',
		'courses' : courses_list,
	}
	return render(request, 'courses/home.html', context)

def about(request):
	
	context = {

		'title' : 'ForkInfoSystem | About',
		
	}
	return render(request, 'courses/about.html', context)

@login_required
def courseDescription(request, pk):
	course = CourseModel.objects.get(id=pk)
	context = {

		'title' : course.courseName + '| Info',
		'course' : course,
		
	}
	return render(request, 'courses/coursedescription.html', context)
