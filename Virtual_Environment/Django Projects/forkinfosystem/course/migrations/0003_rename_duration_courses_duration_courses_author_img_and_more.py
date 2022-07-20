# Generated by Django 4.0.6 on 2022-07-18 06:49

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('course', '0002_alter_guardian_mobile_no'),
    ]

    operations = [
        migrations.RenameField(
            model_name='courses',
            old_name='Duration',
            new_name='duration',
        ),
        migrations.AddField(
            model_name='courses',
            name='author_img',
            field=models.CharField(default='', max_length=2000),
        ),
        migrations.AddField(
            model_name='courses',
            name='author_name',
            field=models.CharField(default='', max_length=255),
        ),
        migrations.AddField(
            model_name='courses',
            name='author_quotes',
            field=models.CharField(default='', max_length=1000),
        ),
    ]
