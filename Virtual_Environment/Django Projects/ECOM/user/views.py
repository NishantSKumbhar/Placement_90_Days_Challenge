from django.shortcuts import redirect, render
from .forms import UserRegisterForm
from django.contrib import messages
def register(request):
    
    if request.method == "POST":
        form = UserRegisterForm(request.POST)
        if form.is_valid():
            form.save()
            username = form.cleaned_data.get('username')
            messages.success(request, f'{username} Your account has been created ! You are now able to login.')
            return redirect('/')

    else:
        form = UserRegisterForm()


    context = {
        'title' : 'Register  |   User',
        'form' : form
    }
    return render(request, 'user/register_user.html', context)
