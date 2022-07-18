from django.db import models


class State(models.Model):
    state = models.CharField(max_length=100)

    def __str__(self):
        return self.state


class StudentInfo(models.Model):
    first_name = models.CharField(max_length=100)
    last_name = models.CharField(max_length=100)
    mail = models.EmailField()
    college = models.CharField(max_length=200)
    state = models.ForeignKey(State, on_delete=models.CASCADE)
    ph_number = models.PositiveBigIntegerField(max_length=10)

    def __str__(self):
        return self.first_name + "  " + self.last_name
