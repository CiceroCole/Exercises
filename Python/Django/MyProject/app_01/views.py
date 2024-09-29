from django.shortcuts import render
from django.http import HttpResponse
from .models import Table_Test


def DB_Test(request, name):
    db = Table_Test()
    db.name = name
    db.save()
    return HttpResponse("<p> OK </p>")


def DB_Test_GET(request):
    response = ""
    for row in Table_Test.objects.all():
        response += "<p>" + str(row.id) + "  " + row.name + "</p>"
    return HttpResponse(response)


# Create your views here.
