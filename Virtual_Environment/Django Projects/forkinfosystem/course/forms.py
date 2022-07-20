from django import forms
from django.forms import ModelForm
from .models import Contact_Us


class ContactForm(forms.ModelForm):

	class Meta:
		model = Contact_Us
		fields = '__all__'
		
