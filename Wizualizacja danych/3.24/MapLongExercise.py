news = "Python programming occasionally more fun than expected"
slug = "-".join(map(lambda w: w[0:6], news.split()))
print(slug)

slug2 = "-".join([w[0:6] for w in news.split()])
print(slug2)
