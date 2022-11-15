from django.shortcuts import render, redirect
from .forms import ContactForm, UserRegistrationForm
from django.contrib import messages
from django.contrib.auth.decorators import login_required

def contact(request):
    if request.method == 'POST':
        form = ContactForm(request.POST)
        if form.is_valid():
            form.save()
            name = form.cleaned_data.get('first_name')
            messages.success(request, f"{name} Thank you for the Feedback. We will come back to you.")
            return redirect('COURSEHOME')
    else:
        form = ContactForm()
    context = {
        'title' : 'Contact | ForkInfoSystem',
        'form' : form
    }
    return render(request, 'UserApp/contact.html', context)



def register(request):
    if request.method == 'POST':
        form = UserRegistrationForm(request.POST)
        if form.is_valid():
            form.save()
            username = form.cleaned_data.get('username')
            messages.success(request, f"{username} Your account has been created! You are now able to log in.")
            return redirect('COURSEHOME')
    else:
        form = UserRegistrationForm()
    context = {
        'title' : 'Register | User',
        'form' : form
    }
    return render(request, 'UserApp/register.html', context)

@login_required
def profile(request):

    context = {
        'title' : 'Profile'
    }
    return render(request, 'UserApp/profile.html', context)


def student_operations(request):
    context = {
        'title' : 'Student | Operations'
    }
    return render(request, 'UserApp/student_opr.html', context)
