from django import forms 
from django.forms import ModelForm
from .models import Products, Discount

class ProductsForm(forms.ModelForm):

    class Meta:
        model = Products
        fields = '__all__'

class DiscountForm(forms.ModelForm):

    class Meta:
        model = Discount
        fields = '__all__'