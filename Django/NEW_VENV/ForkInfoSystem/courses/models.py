from django.db import models
from django.utils import timezone


class CourseModel(models.Model):
	courseName = models.CharField(max_length=100)
	courseDescription = models.TextField(max_length=1000)
	teacher = models.CharField(max_length=256)
	startDate = models.DateTimeField(default=timezone.now)
	duration = models.CharField(max_length=100)
	dayTime = models.CharField(max_length=100)
	isAvailable = models.BooleanField(default=True)
	imgUrl = models.CharField(max_length=1500)

	def __str__(self):
		return self.courseName
