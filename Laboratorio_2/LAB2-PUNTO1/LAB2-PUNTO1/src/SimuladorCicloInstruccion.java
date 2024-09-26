import java.io.*;
import java.util.*;

// Clase que simula la estructura de la CPU y la memoria
class CPU {
    int PC;                  // Contador de programa (Program Counter)
    String ICR;               // Registro de instrucción (Instruction Register)
    int MAR;                  // Registro de dirección de memoria (Memory Address Register)
    int MDR;                  // Registro de datos de memoria (Memory Data Register)
    List<String> memoria;     // Memoria principal (contiene las instrucciones)
    Map<Integer, Integer> datos;  // Memoria de datos (simulada)

    // Constructor que inicializa los registros y la memoria
    public CPU() {
        this.PC = 0;                // Inicialmente, PC apunta a la primera instrucción
        this.ICR = "";               // ICR vacío al principio
        this.MAR = 0;                // MAR sin dirección asignada
        this.MDR = 0;                // MDR sin datos cargados
        this.memoria = new ArrayList<>();  // Memoria de instrucciones vacía
        this.datos = new HashMap<>();  // Memoria de datos vacía
    }

    // Cargar instrucciones en la memoria
    public void cargarInstrucciones(List<String> instrucciones) {
        this.memoria.addAll(instrucciones);
    }

    // Simular el ciclo básico de instrucción
    public void ejecutar() {
        while (PC < memoria.size()) {
            // Fase de búsqueda (Fetch): traer la instrucción a través de la MAR
            MAR = PC;                      // La MAR apunta a la dirección del PC
            ICR = memoria.get(MAR);         // La instrucción es traída a través del MAR
            System.out.println("Fase de búsqueda: Cargando instrucción en PC[" + PC + "]: " + ICR);

            // Incrementar el PC para la siguiente instrucción
            PC++;

            // Fase de decodificación y ejecución (Decode & Execute)
            procesarInstruccion(ICR);
        }
    }

    // Procesar cada instrucción y manipular los registros según sea necesario
    public void procesarInstruccion(String instruccion) {
        String[] partes = instruccion.split(" ");
        String operacion = partes[0];

        switch (operacion) {
            case "LOAD":
                // Cargar un valor en la MDR y actualizar la memoria de datos
                MAR = Integer.parseInt(partes[1]);  // Dirección de memoria
                MDR = Integer.parseInt(partes[2]);  // Valor a cargar
                datos.put(MAR, MDR);  // Almacenar en la memoria de datos
                System.out.println("LOAD: Guardando " + MDR + " en la dirección " + MAR);
                break;

            case "STORE":
                // Almacenar el valor de la memoria de datos en la MDR
                MAR = Integer.parseInt(partes[1]);  // Dirección de memoria
                MDR = datos.getOrDefault(MAR, 0);  // Obtener el valor de esa dirección
                System.out.println("STORE: El valor en la dirección " + MAR + " es " + MDR);
                break;

            case "ADD":
                // Sumar dos valores en la memoria y almacenarlos en MDR
                int direccion1 = Integer.parseInt(partes[1]);
                int direccion2 = Integer.parseInt(partes[2]);
                MDR = datos.getOrDefault(direccion1, 0) + datos.getOrDefault(direccion2, 0);
                System.out.println("ADD: Suma de dirección " + direccion1 + " y dirección " + direccion2 + " = " + MDR);
                break;

            case "SUB":
                // Restar dos valores en la memoria y almacenar en MDR
                direccion1 = Integer.parseInt(partes[1]);
                direccion2 = Integer.parseInt(partes[2]);
                MDR = datos.getOrDefault(direccion1, 0) - datos.getOrDefault(direccion2, 0);
                System.out.println("SUB: Resta de dirección " + direccion1 + " y dirección " + direccion2 + " = " + MDR);
                break;

            case "PRINT":
                // Imprimir el valor almacenado en una dirección de memoria
                MAR = Integer.parseInt(partes[1]);  // Dirección de memoria
                MDR = datos.getOrDefault(MAR, 0);   // Obtener el valor
                System.out.println("PRINT: El valor en la dirección " + MAR + " es " + MDR);
                break;

            default:
                System.out.println("Instrucción no reconocida: " + operacion);
        }
    }
}

public class SimuladorCicloInstruccion {
    // Leer las instrucciones desde un archivo de texto
    public static List<String> leerInstrucciones(String archivo) {
        List<String> instrucciones = new ArrayList<>();
        try (BufferedReader br = new BufferedReader(new FileReader(archivo))) {
            String linea;
            while ((linea = br.readLine()) != null) {
                instrucciones.add(linea);
            }
        } catch (IOException e) {
            System.out.println("Error al leer el archivo: " + e.getMessage());
        }
        return instrucciones;
    }

    public static void main(String[] args) {
        // Crear una instancia de la CPU
        CPU cpu = new CPU();

        // Leer las instrucciones desde un archivo de texto
        List<String> instrucciones = leerInstrucciones("LAB2-PUNTO1/programa.txt");

        // Cargar las instrucciones en la memoria de la CPU
        cpu.cargarInstrucciones(instrucciones);

        // Ejecutar las instrucciones
        cpu.ejecutar();
    }
}

