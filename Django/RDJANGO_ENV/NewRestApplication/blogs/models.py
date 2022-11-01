from django.db import models


class Student(models.Model):
	name = models.CharField(max_length=100)
	father_name = models.CharField(max_length=100)
	age = models.IntegerField(default=18)
	