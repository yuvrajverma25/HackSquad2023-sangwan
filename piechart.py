from matplotlib import pyplot as plt
import numpy as np
hacktober_fest_years = [2017, 2018, 2019,
        2020]
hacktober_fest_participants_percentage = [10, 15, 30, 45]
fig = plt.figure(figsize =(10, 7))
plt.pie(hacktober_fest_participants_percentage, labels = hacktober_fest_years )
plt.show()
