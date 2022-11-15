from django.shortcuts import render

def home(request):

	context = {
		'title' : 'Home | CodeKeen'
	}

	return render(request, 'home/homePage.html', context)
