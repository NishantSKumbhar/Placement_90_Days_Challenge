def sub_aaray_sum(l, sum_target):
	current_sum = 0
	start = 0
	end = 'NO'
	hash_map = {}
	for i in range(0,len(l)):
		current_sum += l[i]

		if(current_sum - sum_target == 0):
			start = 0
			end = i
			break

		if(current_sum - sum_target) in hash_map:
			start = hash_map[current_sum-sum_target] + 1
			end = i
			break

		hash_map[current_sum] = i

	if end == 'NO':
		print("NO Solution")
	else:
		print(f"Got Solution : Start : {start} & End : {end}")


def main():
	a = [10, 15, -5, 15, -10, 5]
	sub_aaray_sum(a, 5)

main()