import pandas as pd
import matplotlib.pyplot as plt
netflix=pd.read_csv('C:/Users/udayk/OneDrive/Desktop/netfilx_titles.csv')
s=(netflix.groupby('country').size().to_frame('number of movies').reset_index())
s=s[(s['number of movies']>=80)]
plot=plt.bar(s['country'],s['number of movies'],width=0.6,color=['r','g','k','b','m'])