from django.db import models
from django.contrib.auth.models import User
from froala_editor.fields import FroalaField
from .helpers import *


class BlogModel(models.Model):
	title = models.CharField(max_length=255)
	content = FroalaField()
	slug = models.SlugField(max_length=1000, null=True, blank=True)
	# It is a way of generating a valid URL, generally using data already obtained. For instance, using the title of an article to generate a URL.
	
	image = models.ImageField(upload_to='blog')
	created_at = models.DateTimeField(auto_now_add = True)
	# created_at only run at one time i.e when you create that

	updated_at = models.DateTimeField(auto_now = True)
	# when updated then it calls

	def __str__(self):
		return self.title


	def save(self, *args, **kwargs):

		self.slug = generate_slug(self.title)
		super(BlogModel, self).save(*args, **kwargs)