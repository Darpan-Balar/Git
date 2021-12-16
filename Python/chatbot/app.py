# required imports to be done
from flask import Flask, render_template, request
from chatterbot import ChatBot
from chatterbot.trainers import ChatterBotCorpusTrainer

app = Flask(__name__)
englishBot = ChatBot(
    "Chatterbot", storage_adapter="chatterbot.storage.SQLStorageAdapter")   # creating a chatbot
trainer = ChatterBotCorpusTrainer(englishBot)

# training the chatterbot in english
trainer.train("chatterbot.corpus.english")


# defining a app route
@app.route("/")
def index():
    return render_template("index.html")


@app.route("/get")                                 # bot response function
def get_bot_response():
    inputText = request.args.get('msg')
    return str(englishBot.get_response(inputText))


if __name__ == "__main__":
    app.run()
