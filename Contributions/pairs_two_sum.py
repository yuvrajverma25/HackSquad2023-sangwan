
def find(nums,target):
    for i in range(len(nums)):
        for j in range(i+1,len(nums)):
            if nums[i]==nums[j]:
                continue
            elif nums[i] + nums[j] == target:
                print(nums[i],nums[j])

myList = [1,2,3,4,5,6,7,8,9,10]
find(myList,19)