

array = [2, 4, 6, 4, 4, 6, 2]

def get_all_occurrence(array):
    temp = []
    for elem in array:
        if elem not in temp:
            temp.append(elem)     
    return temp

print(get_all_occurrence(array))

occ = get_all_occurrence(array)

def get_number_off_occurrence(array, occ):
    tab = []
    count = 0
    for i in occ:
        for j in array:
            if i == j:
                count += 1
        tab.append(count)
        count = 0
    return tab

print(get_number_off_occurrence(array, occ))        

tab = get_number_off_occurrence(array, occ)

def get_sum(tab):
    count = 0
    MAX = 3
    for elem in tab:
        if elem < MAX and elem % 2 == 0:
            count += elem / 2
        elif  elem > MAX and elem % 2 == 0:
            count += elem / 2    
        elif  elem > MAX and elem % 2 != 0:
            count += (elem - elem %2) / 2
        else:
            count += elem / MAX
            
    return count

print(get_sum(tab))           
        

            