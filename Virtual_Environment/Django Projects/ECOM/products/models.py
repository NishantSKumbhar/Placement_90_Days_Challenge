from pyexpat import model
from django.db import models
from django.utils import timezone
from django.contrib.auth.models import User


class Discount(models.Model):
    purpose = models.CharField(max_length=40)
    value = models.IntegerField(default=0)
    code = models.CharField(max_length=5)

    def __str__(self):
        return self.purpose

class Products(models.Model):
    title = models.CharField(max_length=30)
    date_posted = models.DateTimeField(default=timezone.now)
    user = models.ForeignKey(User, on_delete=models.CASCADE)
    price = models.FloatField(default=0)
    stock = models.IntegerField(default=0)
    discount = models.ForeignKey(Discount, on_delete=models.CASCADE)
    img_url = models.CharField(default="", max_length=2010)

    def __str__(self):
        return self.title

class Contact(models.Model):
    f_name = models.CharField(max_length=50)
    l_name = models.CharField(max_length=50)
    
    def __str__(self):
        return f"{self.f_name} {self.l_name}"