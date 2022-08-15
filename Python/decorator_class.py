class decorator_class(object):
	def __init__(self, gun):
		self.gun = gun

	def __call__(self, *args, **kwargs):
		print("Call method is exicuted before.  This is the Extra Functionality we have added !")
		return self.gun(*args,**kwargs)

@decorator_class
def displaying_fun():
	print("Only for displaying ..... : ) ")


displaying_fun()