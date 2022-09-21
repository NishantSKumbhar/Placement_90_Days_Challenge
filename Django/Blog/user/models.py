from distutils.command import upload
from email.policy import default
from pyexpat import model
from statistics import mode
from django.db import models
from django.contrib.auth.models import User
from PIL import Image

class Profile(models.Model):
    user = models.OneToOneField(User, on_delete=models.CASCADE)
    image = models.ImageField(default='default1.jpg', upload_to ='profile_pics')
    # you need to insrtall pillow to work with images
    # pip install Pillow
    
    def __str__(self):
        return f"{self.user.username} Profile"
    
    def save(self):
        super().save()

        img =Image.open(self.image.path)

        if img.height > 300 or img.width > 300:
            output_size = (300, 200)
            img.thumbnail(output_size)
            img.save(self.image.path)
            