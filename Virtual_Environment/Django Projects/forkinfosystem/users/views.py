from django.shortcuts import render, redirect
from .forms import UserRegistrationForm
from django.contrib import messages
from django.contrib.auth.decorators import login_required


def register_user(request):
    if request.method == "POST":
    	form = UserRegistrationForm(request.POST)
    	if form.is_valid():
    		form.save()
    		name = form.cleaned_data.get('username')
    		messages.success(request, f"{name} Your Account has been successfully created !, You can login")
    		return redirect('/login')
    else:
    	form = UserRegistrationForm()
    context = {
        'title' : 'Register_User | Fork Infosystems',
        'form' : form

    }
    return render(request, 'users/register.html', context)



# if you are using class-based views then the process of login required 
# differnt
@login_required
def profile(request):
    context = {
        'title' : 'Profile | Fork Infosystems',
        

    }
    return render(request, 'users/profile.html', context)