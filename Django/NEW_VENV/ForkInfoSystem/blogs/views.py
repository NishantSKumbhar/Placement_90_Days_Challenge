from logging import lastResort
from turtle import pos
from django.shortcuts import render, redirect
from .models import PostModel
from django.contrib.auth.decorators import login_required
from .forms import CreatePostForm


@login_required
def BlogHome(request):
    
    if request.method == 'POST':
        form = CreatePostForm(request.POST)
        form.instance.author = request.user
        if form.is_valid():
            form.save()
            return redirect('BLOGHOME')
    else:
        posts = PostModel.objects.all()
        form = CreatePostForm()
        latest = PostModel.objects.last()
    context = {
        'title' : 'Blog | ForkInfoSystem',
        'posts' : posts,
        'form' : form,
        'latest' : latest
    }

    return render(request, 'blogs/bloghome.html', context)
