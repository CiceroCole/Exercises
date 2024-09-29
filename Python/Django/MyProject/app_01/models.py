from django.db import models

# Create your models here.


class Table_Test(models.Model):
    id = models.IntegerField(unique=True, primary_key=True)
    name = models.TextField(max_length=50)
