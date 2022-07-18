from django.urls import path
from . import views

urlpatterns = [
    path('', views.home, name="home"),
    path('product_card/', views.products_card, name="products-card"),
    path('product_table/', views.products_table, name="products-table"),
    path('add_products/', views.add_product, name="products-add"),
    path('add_discount/', views.add_discount, name="discount-add"),
    path('update_product/<str:pk>/', views.update_products, name="products-update"),
    path('delete_product/<str:pk>/', views.delete_products, name="products-delete"),
    path('about/', views.about, name="about"),
    path('contact/', views.contact, name="contact"),
    
]
