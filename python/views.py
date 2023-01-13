from flask import Blueprint  #render_template

views = Blueprint(__name__,"views")


@views.route("/")
def home():
    return "<h1>homepage</h1>"
# render_template("index.html")
