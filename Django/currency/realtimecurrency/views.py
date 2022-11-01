from django.shortcuts import render
import random
def home(request):
	context = {
		'title' : 'Real Time',
		
	}
	return render(request, 'realtimecurrency/home.html', context)


def returnvalue(request):
	context = {
		'title' : 'Real Time',
		'usd' : random.randint(1, 10),
		'inr' : random.randint(70, 130),
		'er' : random.randint(90, 100),
	}
	return render(request, 'realtimecurrency/show.html', context)