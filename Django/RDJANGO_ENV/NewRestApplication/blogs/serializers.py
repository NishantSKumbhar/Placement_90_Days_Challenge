from rest_framework import serializers
from .models import *


class StudentSerializer(serializers.ModelSerializer):

	class Meta:
		model = Student
		fields = '__all__'
		# exclude = ['n1', '2n']


	# validate, error , data are fixed words
	def validate(self, data):

		if not data['name'].isalnum():
			raise serializers.ValidationError(
					{
						
						"error" : "Name Can not contain Numeric Values"
					}
				)
		
		if data['age'] < 18:
			raise serializers.ValidationError(
					{
						
						"error" : "Age Can Not < 18"
					}
				)


		return data