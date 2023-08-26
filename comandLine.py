### CLI FEITA PARA UMA MAIOR FACILIDADE NA ENTRADA NO TERMINAL ####

import argparse
import json
import os

def comandLine() -> str:  ### vai retornar uma string 
    p = argparse.ArgumentParser(description="A simple CLI for the program")
    p.add_argument("-f", "--file", type = str, help="EScreva o nome do arquivo", required=True)

    _file = p.parse_args().json_file ### vai pegar o arquivo json que foi passado no terminal
    
    return _file

def read_json(_file: str) -> dict:
    directory = os.getcwd() ##pegando o diretorio atual
    path = f'{directory}//images//{_file}' ##colecionando o caminho do arquivo --> Esta com // porque estou no linux se fosse no windows seria \\
    
    with open(path, "r") as f:##abrindo o arquivo
        _data = json.load(f)##lendo o arquivo e transformando em um dicionario
    return _data

if __name__ == "__main__":
    arq = comandLine()
    data = read_json(arq)
    