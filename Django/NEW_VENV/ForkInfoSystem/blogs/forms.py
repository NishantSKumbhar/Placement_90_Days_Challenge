from unittest import mock
from .models import PostModel
from django import forms

class CreatePostForm(forms.ModelForm):

    class Meta:
        model = PostModel
        fields = ['title', 'content']
