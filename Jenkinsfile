pipeline {
    agent any

    environment {
        TALIS_DEVICE_TYPE = 'Talis1GDevice'
        TALIS_DEVICE_TYPE4 = 'Talis4GDevice'
        DB_ENGINE = 'sqlite'
    }

    stages {
        stage('Build') {
            steps {
                echo "Building for all Talis device types ..."
                sh 'make hello'
            }
        }
        stage('Test') {
            steps {
                echo "Testing all Talis device types ..."
                sh './hello'
            }
        }
        stage('Deploy') {
            steps {
                echo "Deploying to ${TALIS_DEVICE_TYPE} ..."
                sh 'true'
            }
        }
    }

    post {
        always {
            echo "Post: always step ..."
        }
        success {
            echo "Post: success step ..."
        }
        unstable {
            echo "Post: unstable step ..."
        }
        failure {
            echo "Post: failure step ..."
        }
        changed {
            echo "Post: changed step ..."
        }
    }
}
