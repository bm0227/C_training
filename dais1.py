import streamlit as st
import pandas as pd
import numpy as np
from PIL import Image

## logo
#logo = Image.open("logo1.jpg")
#st.image(logo)

##sidebar
sidebar = st.sidebar.radio("guide", ("Home", "Image", "Time series"))

if sidebar == "Home":
      st.write(" ")
elif sidebar == "Image":
      st.write(" ")
elif sidebar == "Time series":
      st.write(" ")

##text_home
st.title("Dais open lab.")
st.header("Header")
st.subheader("subheader")
st.write("Dais open lab.")
st.write(" ")
st.write(" ")
st.write(" ")

##text_image
st.header("Image")
st.subheader("subheader")
st.write("Dais open lab.")
if st.button("Push"):
      col1, col2, col3 = st.columns(3)
      with col1:
          st.header("A")
          st.write("Image Algorithm")

      with col2:
          st.header("B")
          st.write("Image Algorithm")

      with col3:
          st.header("C")
          st.write("Image Algorithm")
      uploaded_file = st.file_uploader("Choose a file")
      if uploaded_file is not None:
          df = pd.read_csv(uploaded_file)
          st.write(df)
      st.write("result")

st.write(" ")
st.write(" ")
st.write(" ")

##text_timeseries
st.header("Time series")
st.subheader("subheader")
st.write("Dais open lab.")
if st.button("Push2"):
      col1, col2, col3 = st.columns(3)
      with col1:
          st.header("A")
          st.write("Time series Algorithm")

      with col2:
          st.header("B")
          st.write("Time series Algorithm")

      with col3:
          st.header("C")
          st.write("Time series Algorithm")
      uploaded_file = st.file_uploader("Choose a file")
      if uploaded_file is not None:
          df = pd.read_csv(uploaded_file)
          st.write(df)
      st.write("result")

st.write(" ")
st.write(" ")
st.write(" ")
