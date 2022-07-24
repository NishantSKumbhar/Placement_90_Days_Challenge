from django.contrib import admin
from .models import *

class ProductAdmin(admin.ModelAdmin):
	list_display = ('title', 'stock')
	search_fields = ['title']

admin.site.register(Products, ProductAdmin)
admin.site.register(Discount)
admin.site.register(Contact)
