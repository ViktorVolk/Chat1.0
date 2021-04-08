from flask import Flask, request, abort
from datetime import datetime
import time

app = Flask(__name__)
messages = [
    {
        'name': 'Jack',
        'text': 'Привет всем, я Jack',
        'time': 1614887855.3456457,
    },
    {
        'name': 'Mary',
        'text': 'Привет Jack, я - Mary',
        'time': 1614887857.3456457,
    }
]


@app.route("/")
def hello():
    return "<b>Hello World!</b>"


@app.route("/status")
def status():
    time = datetime.now()
    return {
        'status': True,
        'name': 'Git Messenger',
        'time': time.strftime('%d %b %Y %H:%M:%S'),
    }


@app.route("/send", methods=['POST'])
def send_message(): #Метод для отправки сообщений
    data = request.json  # Позволяет возвращать то, что пользователь нам передал
    if not isinstance(data, dict):
        return abort(400)

    name = data.get('name')
    text = data.get('text')

    if not isinstance(name, str) or len(name) == 0:
        return abort(400)

    if not isinstance(text, str) or len(text) == 0 or len(text) > 1000:
        return abort(400)

    # TODO validation

    message = {
        'name': name,
        'text': text,
        'time': time.time()
    }
    messages.append(message)

    return {'ok': True}


@app.route("/messages")
def get_messages():  #Метод для получения сообщения
    try:
        after = float((request.args['after']))
    except:
        return abort(400)

    response = []
    for message in messages:
        if message['time'] > after:
            response.append(message)
    return {'messages': response[:50]}


app.run()
