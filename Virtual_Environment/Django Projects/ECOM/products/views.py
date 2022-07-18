from django.shortcuts import render, redirect
from .models import *
from .forms import ProductsForm, DiscountForm
def home(request):
    context = {
        'title' : 'Home | Products',
        
    }

    return render(request, 'products/home.html', context)



def products_card(request):

    products = Products.objects.all()
    context = {
        'title' : 'Home | Products',
        'products' : products
    }

    return render(request, 'products/products_home.html', context)


def products_table(request):

    products = Products.objects.all()


    context = {
        'title' : 'Home | Products',
        'products' : products
    }

    return render(request, 'products/products_table.html', context)


def add_product(request):

    
    if request.method == 'POST':
        print("Nishant Psot")
        form = ProductsForm(request.POST)
        
        if form.is_valid():
            form.save()
            return redirect('/')
    form = ProductsForm()
    
    context = {
        'title' : 'Add | Products',
        'form' : form,
    }

    return render(request, 'products/products_add.html', context)

def add_discount(request):

    
    if request.method == 'POST':
        
        form = DiscountForm(request.POST)
        
        if form.is_valid():
            form.save()
            return redirect('/')
    form = DiscountForm()
    
    context = {
        'title' : 'Add | Discount',
        'form' : form,
    }

    return render(request, 'products/discount_add.html', context)

def update_products(request, pk):

    product = Products.objects.get(id=pk)
    form = ProductsForm(instance=product)

    if request.method == "POST":
        form = ProductsForm(request.POST, instance=product)
        if form.is_valid():
            form.save()
            return redirect('/')
    
    
    context = {
        'title' : 'Update | Product',
        'form' : form
    }

    return render(request, 'products/update_products.html', context)


def delete_products(request, pk):

    product = Products.objects.get(id=pk)
    
    if request.method == "POST":
        product.delete()
        return redirect('/')    
    context = {
        'title' : 'Delete | Product',
        'item' : product
    }

    return render(request, 'products/delete_products.html', context)


def about(request):
    context = {
        'title' : 'About | Products',
    }
    return render(request, 'products/about.html', context)


def contact(request):
    context = {
        'title' : 'Contact | Products',
    }
    return render(request, 'products/contact.html', context)
