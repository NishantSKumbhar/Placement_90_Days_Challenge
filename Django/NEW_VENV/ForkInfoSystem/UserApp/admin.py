from django.contrib import admin
from .models import ContactForm, student_crud
admin.site.register(student_crud)
admin.site.register(ContactForm)
