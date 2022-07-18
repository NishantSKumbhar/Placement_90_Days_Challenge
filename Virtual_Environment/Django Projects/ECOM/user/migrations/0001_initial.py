# Generated by Django 4.0.3 on 2022-05-31 03:28

from django.db import migrations, models
import django.db.models.deletion


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='State',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('state', models.CharField(max_length=100)),
            ],
        ),
        migrations.CreateModel(
            name='StudentInfo',
            fields=[
                ('id', models.BigAutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('first_name', models.CharField(max_length=100)),
                ('last_name', models.CharField(max_length=100)),
                ('mail', models.EmailField(max_length=254)),
                ('college', models.CharField(max_length=200)),
                ('ph_number', models.PositiveBigIntegerField(max_length=10)),
                ('state', models.ForeignKey(on_delete=django.db.models.deletion.CASCADE, to='user.state')),
            ],
        ),
    ]
