from email.policy import default
from statistics import mode
from django.db import models
#from phone_field import PhoneField


class student_crud(models.Model):
	first_name = models.CharField(max_length=256)
	last_name = models.CharField(max_length=256)
	mobile_number = models.CharField(max_length=10)
	email = models.EmailField()
	city = models.CharField(max_length=255)
	student_img = models.CharField(max_length=1084)
	address = models.CharField(max_length=1000, blank = True)
	state = models.CharField(max_length=255, blank = True)
	zip_code = models.CharField(max_length=6, blank = True)

	def __str__(self):
		return self.first_name + " " + self.last_name

class ContactForm(models.Model):
	first_name = models.CharField(max_length=256)
	last_name = models.CharField(max_length=256)
	mobile_number = models.CharField(max_length=10, default='1234567890')
	email = models.EmailField(default='someone@example.com')
	STUDENT = 'student'
	TEACHER = 'teacher'
	OTHER = 'other'

	STATUS = [
        (STUDENT, ('student, pursuing degree')),
        (TEACHER, ('teacher, eger to learn')),
        (OTHER, ('other, intrested')),
   	]
	status = models.CharField(max_length=32,choices=STATUS,default=OTHER)

	suggesion = models.CharField(max_length=1000)

	def __str__(self) -> str:
		return self.first_name + " " + self.last_name
	
