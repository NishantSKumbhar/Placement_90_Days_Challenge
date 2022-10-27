from django.db import models
from django.contrib.auth.models import AbstractUser


# Create your models here.

# generally user model you can see when you go to
# admin panel but now you need to register it.
# to see on the admin panel.
class User(AbstractUser):
	name = models.CharField(max_length=100, null=True)

	# we are overriding the email field
	email = models.EmailField(unique=True, null=True)
	bio = models.TextField(null=True, blank=True)

	hackathon_participants = models.BooleanField(default=True, null=True)

	# avatar =


	# tell django that user email field to login
	USERNAME_FIELD = 'email'

	# while creating superuser this field also asked from now
	REQUIRED_FIELDS = ['username'] 


class Event(models.Model):
	name = models.CharField(max_length=200)
	description = models.TextField(null = True, blank=True)
	participants = models.ManyToManyField(User, blank=True, related_name='events')
	date = models.DateTimeField()
	updated = models.DateTimeField(auto_now =True)
	created = models.DateTimeField(auto_now_add =True) 

	def __str__(self):
		return self.name 


class Submission(models.Model):
	participant = models.ForeignKey(User, on_delete=models.SET_NULL, null=True) # if user deleted then submission still there
	event = models.ForeignKey(Event, on_delete=models.SET_NULL, null=True)
	details = models.TextField(null=True, blank=True)


	def __str__(self):
		return str(self.event) + ' --- ' + str(self.participant)