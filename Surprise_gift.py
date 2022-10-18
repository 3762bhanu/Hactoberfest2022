from wordcloud import WordCloud
import matplotlib.pyplot as plt
import csv

file_ob = open(r"feedback.csv")

# read the feedback file
reader_ob = csv.reader(file_ob)
reader_contents = list(reader_ob)
words = ""

for row in reader_contents :	
	for feedback in row :
		words = words + " " + feedback

# build the WordCloud image
wordcloud = WordCloud(width = 800, height = 400, background_color ='orchid', colormap='Pastel1', random_state = 1, max_words = 20).generate(words)

# save the image
wordcloud.to_file("wordcloud.png")

# show the WordCloud image
plt.figure()
plt.imshow(wordcloud)
plt.axis("off")
plt.margins(x=0, y=0)
plt.tight_layout(pad = 0) 
plt.show()
