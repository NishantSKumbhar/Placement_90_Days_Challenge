from django.db import models
from django.utils import timezone

class Guardian(models.Model):
	name = models.CharField(max_length=255)
	specialization = models.CharField(max_length=255)
	mobile_no = models.CharField(max_length=10, default='0')

	def __str__(self):
		return self.name



class Courses(models.Model):
	title = models.CharField(max_length=100)
	fees = models.IntegerField(default = 1000)
	description = models.TextField(max_length=1080)
	teacher = models.ForeignKey(Guardian, on_delete = models.CASCADE)
	img = models.CharField(max_length=2080)
	covered_topics = models.TextField()
	start_date = models.DateTimeField()
	duration = models.IntegerField(default=1)
	author_img = models.CharField(default="", max_length=2000)
	author_name = models.CharField(default="", max_length=255)
	author_quotes = models.CharField(default="", max_length=1000)
	
	def __str__(self):
		return self.title

class Contact_Us(models.Model):
	first_name = models.CharField(max_length=255)
	last_name = models.CharField(max_length=255)
	email = models.EmailField(max_length=254)
	contact_number = models.CharField(max_length=10)

	def __str__(self):
		return self.first_name
