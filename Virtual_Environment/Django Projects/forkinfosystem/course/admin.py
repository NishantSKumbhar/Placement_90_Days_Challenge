from django.contrib import admin
from .models import *


class GuardianAdmin(admin.ModelAdmin):
	list_display = ['name', 'specialization']
	search_fields = ['name']


class CourseAdmin(admin.ModelAdmin):
	list_display = ['title', 'fees']
	search_fields = ['title']


admin.site.register(Courses, CourseAdmin )
admin.site.register(Guardian, GuardianAdmin)
admin.site.register(Contact_Us)